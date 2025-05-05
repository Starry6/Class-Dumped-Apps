@interface PLCrowdSourcedThemesAssetEvent : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUUID:;
- (id)uuid;
- (unsigned int)dataVersion;
- (void).cxx_destruct;
- (id)serialize;
+ (id)eventWithData:dataVersion:;
@end
