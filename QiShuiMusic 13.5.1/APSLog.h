@interface APSLog : NSObject
+ (id)xpc;
+ (id)alert;
+ (id)telemetry;
+ (id)networking;
+ (id)stream;
+ (id)courierOversized;
+ (id)daemon;
+ (id)courier;
+ (id)preference;
+ (id)nonce;
+ (id)ttlCollection;
+ (BOOL)shouldPowerLogEvent:;
+ (id)pubSub;
+ (id)main;
+ (id)PUSHTRACE;
+ (id)certificate;
+ (id)pushHistory;
+ (id)topicManager;
+ (id)connectionServer;
+ (id)connection;
+ (id)simulator;
+ (id)topicManagerOversized;
+ (id)activityTracking;
+ (id)database;
+ (id)taskManager;
@end
