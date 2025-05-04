@interface AWEHPRealTimeActivityInfo : MTLModel
@property (nonatomic) AWEHPRealTimeActivityChannelInfo channelInfo;
@property (nonatomic) NSString entryID;
@property (nonatomic) q deadlineTime;
@property (nonatomic) q versionID;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)deadlineTime;
- (void)setDeadlineTime:;
- (BOOL)isDisabled;
- (BOOL)isValidWithError:;
- (void)setIsDisabled:;
- (id)entryID;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (long long)versionID;
- (void)setVersionID:;
- (void)setChannelInfo:;
- (id)channelInfo;
- (void)setEntryID:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)channelInfoJSONTransformer;
@end
