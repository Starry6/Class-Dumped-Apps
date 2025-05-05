@interface CSJPlayableCommonInfo : NSObject
@property (nonatomic) CSJLoadingInfo loadingInfo;
@property (nonatomic) BOOL is_playable_top_priority;
- (void)setLoadingInfo:;
- (BOOL)is_playable_top_priority;
- (id)loadingInfo;
- (void)setIs_playable_top_priority:;
- (id)init;
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
@end
