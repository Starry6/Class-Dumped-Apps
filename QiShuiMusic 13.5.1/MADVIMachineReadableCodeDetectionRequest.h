@interface MADVIMachineReadableCodeDetectionRequest : MADRequest
@property (nonatomic) NSArray symbologies;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)symbologies;
- (id)initWithSymbologies:;
+ (BOOL)supportsSecureCoding;
@end
