@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject
@property (nonatomic) double topInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double rightInset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBottomInset:;
- (void)setLeftInset:;
- (void)encodeWithXPCDictionary:;
- (double)leftInset;
- (void)setTopInset:;
- (double)rightInset;
- (id)initWithXPCDictionary:;
- (double)bottomInset;
- (void)setRightInset:;
- (id)description;
- (double)topInset;
- (id)initWithTop:left:bottom:right:;
- (id)copyWithZone:;
@end
