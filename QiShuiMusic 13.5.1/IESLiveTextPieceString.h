@interface IESLiveTextPieceString : IESLivePBBaseMessage
@property (nonatomic) IESLiveTextFormat format;
@property (nonatomic) BOOL hasFormat;
@property (nonatomic) NSString stringValue;
+ (id)descriptor;
@end
