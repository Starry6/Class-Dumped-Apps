@interface RivalsRecommendResponse_PKSubTab : IESLivePBBaseMessage
@property (nonatomic) PKSubTabKey key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL selected;
+ (id)descriptor;
@end
