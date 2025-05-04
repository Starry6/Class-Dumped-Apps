@interface AWEIMMessageListContinuousFoldRule : NSObject
@property (nonatomic) NSString foldID;
@property (nonatomic) NSArray matchConditions;
@property (nonatomic) NSArray chatType;
@property (nonatomic) NSArray groupCategory;
@property (nonatomic) BOOL defaultFoldValue;
@property (nonatomic) q foldThreshold;
@property (nonatomic) AWEIMMessageListContinuousFoldRule_MsgModel msgModel;
- (id)chatType;
- (void)setChatType:;
- (id)msgModel;
- (void)setMsgModel:;
- (void)setFoldID:;
- (void)setFoldThreshold:;
- (void)setDefaultFoldValue:;
- (void)setMatchConditions:;
- (id)foldID;
- (id)matchConditions;
- (BOOL)defaultFoldValue;
- (long long)foldThreshold;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (id)groupCategory;
- (void)setGroupCategory:;
@end
