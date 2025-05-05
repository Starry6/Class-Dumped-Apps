@interface CHStrokeGroupTextCorrectionResult : NSObject
@property (nonatomic) NSArray inputStrokeIdentifiers;
@property (nonatomic) CHTextCorrectionResult textCorrectionResult;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)inputStrokeIdentifiers;
- (id)initWithTextCorrectionResult:inputStrokeIdentifiers:;
- (BOOL)isEqualToStrokeGroupTextCorrectionResult:;
- (id)textCorrectionResult;
+ (BOOL)supportsSecureCoding;
@end
