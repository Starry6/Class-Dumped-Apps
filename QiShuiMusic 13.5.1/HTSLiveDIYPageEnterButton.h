@interface HTSLiveDIYPageEnterButton : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL locked;
+ (id)descriptor;
@end
