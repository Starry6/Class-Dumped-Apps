@interface AWEAdSearchComponentDisplayControl : MTLModel
@property (nonatomic) BOOL isHideCommentArea;
@property (nonatomic) BOOL isHideCommentButton;
@property (nonatomic) BOOL isStrongUserStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsHideCommentArea:;
- (void)setIsHideCommentButton:;
- (void)setIsStrongUserStyle:;
- (BOOL)isStrongUserStyle;
- (BOOL)isHideCommentButton;
- (BOOL)isHideCommentArea;
+ (BOOL)automaticallyDefaultMapping;
@end
