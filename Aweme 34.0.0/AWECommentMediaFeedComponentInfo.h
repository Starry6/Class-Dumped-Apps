@interface AWECommentMediaFeedComponentInfo : NSObject
@property (nonatomic) NSString className;
@property (nonatomic) Q appliedInteractionType;
@property (nonatomic) NSDictionary paramDict;
- (id)paramDict;
- (unsigned long long)appliedInteractionType;
- (void)setAppliedInteractionType:;
- (void)setParamDict:;
- (id)className;
- (void)setClassName:;
- (void).cxx_destruct;
@end
