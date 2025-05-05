@interface HTSLiveDecotationDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveDecoration textDecoration;
@property (nonatomic) BOOL hasTextDecoration;
@property (nonatomic) HTSLiveDecoration imageDecoration;
@property (nonatomic) BOOL hasImageDecoration;
+ (id)descriptor;
@end
