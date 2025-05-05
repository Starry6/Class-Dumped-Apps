@interface MXSessionSidekick : NSObject
- (unsigned long long)getID;
- (int)setID:;
- (void)dealloc;
- (id)initWithSession:;
- (int)setIsPlaying:;
- (int)setPropertyForKey:value:;
- (BOOL)getIsPlaying;
- (int)getClientType;
- (id)getCoreSession;
- (id)info;
- (void)dumpInfo;
- (int)copyPropertyForKey:valueOut:;
- (id)getClientTypeAsString;
- (int)setClientType:;
- (int)activate;
- (int)deactivate:postInterruptionNotification:;
- (unsigned long long)getCoreSessionID;
+ (int)updateIsPlaying:;
@end
