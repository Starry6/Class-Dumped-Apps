@interface RBSProcessLimitations : NSObject
@property (nonatomic) double runTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)runTime;
- (id)init;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)description;
- (void)setRunTime:;
+ (BOOL)supportsRBSXPCSecureCoding;
@end
