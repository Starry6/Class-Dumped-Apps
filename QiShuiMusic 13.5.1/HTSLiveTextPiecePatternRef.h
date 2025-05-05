@interface HTSLiveTextPiecePatternRef : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSString defaultPattern;
+ (id)descriptor;
@end
