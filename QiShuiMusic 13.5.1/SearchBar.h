@interface SearchBar : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
