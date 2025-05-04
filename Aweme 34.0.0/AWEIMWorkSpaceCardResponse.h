@interface AWEIMWorkSpaceCardResponse : AWEBaseApiModel
@property (nonatomic) NSArray workSpaceCards;
@property (nonatomic) BOOL newWorkSpace;
@property (nonatomic) NSString jumpSchema;
- (id)jumpSchema;
- (void)setJumpSchema:;
- (id)workSpaceCards;
- (BOOL)newWorkSpace;
- (void)setWorkSpaceCards:;
- (void)setNewWorkSpace:;
- (void).cxx_destruct;
+ (id)workSpaceCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
