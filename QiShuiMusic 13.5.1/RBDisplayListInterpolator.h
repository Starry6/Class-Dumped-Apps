@interface RBDisplayListInterpolator : NSObject
@property (nonatomic) <RBDisplayListContents> from;
@property (nonatomic) <RBDisplayListContents> to;
@property (nonatomic) NSDictionary options;
@property (nonatomic) BOOL identity;
@property (nonatomic) BOOL onlyFades;
- (id)options;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isIdentity;
- (BOOL)onlyFades;
- (void)drawInState:by:;
- (id)boundingRectWithProgress:;
- (id)from;
- (id)to;
- (id)contentsWithProgress:;
+ (id)interpolatorWithFrom:to:options:;
@end
