#ifndef EXCL_TRIGGER

#define TRIGGER_COMMON_DEFINED

typedef struct {
  INT       log_history;
  double    event_limit;
  char      format[80];
} TRIGGER_COMMON;

#define TRIGGER_COMMON_STR(_name) const char *_name[] = {\
"[.]",\
"Log history = INT : 0",\
"Event limit = DOUBLE : 0",\
"Format = STRING : [80] ",\
"",\
NULL }

#define TRIGGER_SETTINGS_DEFINED

typedef struct {
  char   name[17];
} TRIGGER_SETTINGS;

#define TRIGGER_SETTINGS_STR(_name) const char *_name[] = {\
"[.]",\
"name = STRING : [17] girfadc14",\
NULL }


#define MDPP16_SETTINGS_DEFINED

typedef struct {
  DWORD     multi_event;
  DWORD     max_datalen;
  DWORD     window_width;
  DWORD     window_start;
  DWORD     tdc_resln;
  DWORD     adc_resln;
  DWORD     trig_source;
  DWORD     nim2_input;
  DWORD     pulser_ctrl;
  DWORD     pulser_amp;
  DWORD     mark_type;
  DWORD     trig_output;
  DWORD     ts_source;
  char      temp[17];
  DWORD     tf_int_diff;
  DWORD     gain;
  DWORD     threshold0;
  DWORD     threshold1;
  DWORD     shaping_time;
  DWORD     blr;
  DWORD     reset_time;
  DWORD     rise_time;
} MDPP16_SETTINGS;

#define MDPP16_SETTINGS_STR(_name) const char *_name[] = {\
"[.]",\
"multi_event = DWORD : 0",\
"max_datalen = DWORD : 0",\
"window_width = DWORD : 512",\
"window_start = DWORD : 16128",\
"tdc_resln = DWORD : 2",\
"adc_resln = DWORD : 0",\
"trig_source = DWORD : 256",\
"nim2_input = DWORD : 2",\
"pulser_ctrl = DWORD : 0",\
"pulser_amp = DWORD : 400",\
"mark_type = DWORD : 1",\
"trig_output = DWORD : 256",\
"ts_source = DWORD : 0",\
"temp = STRING : [17] channel settings",\
"tf_int_diff = DWORD : 20",\
"gain = DWORD : 218",\
"threshold0 = DWORD : 112",\
"threshold1 = DWORD : 112",\
"shaping_time = DWORD : 240",\
"blr = DWORD : 1",\
"reset_time = DWORD : 4000",\
"rise_time = DWORD : 80",\
"",\
NULL }



#endif

