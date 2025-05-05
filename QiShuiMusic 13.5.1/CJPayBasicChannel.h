@interface CJPayBasicChannel : JSONModel
@property (nonatomic) Q channelType;
@property (nonatomic) NSDictionary dataDict;
@property (nonatomic) NSDictionary trackParam;
@property (nonatomic) @? completionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canProcessUserActivity:;
- (BOOL)canProcessWithURL:;
- (id)dataDict;
- (void)payActionWithDataDict:completionBlock:;
- (void)setDataDict:;
- (void)setTrackParam:;
- (id)trackParam;
- (void)trackWithEvent:trackParam:;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (unsigned long long)channelType;
- (void)setChannelType:;
+ (BOOL)isAvailableUse;
+ (BOOL)propertyIsOptional:;
@end
