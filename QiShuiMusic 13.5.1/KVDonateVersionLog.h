@interface KVDonateVersionLog : NSObject
- (id)init;
- (id)initWithQueue:directoryPath:;
- (unsigned long long)incrementVersionForItemType:originAppId:deviceId:userId:;
- (void).cxx_destruct;
@end
