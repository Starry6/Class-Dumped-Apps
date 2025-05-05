@interface MADVIVisualSearchGatingDomainInfo : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString label;
@property (nonatomic) NSString glyphName;
@property (nonatomic) BOOL hasFocalPoint;
@property (nonatomic) {CGPoint=dd} focalPoint;
@property (nonatomic) NSString displayLabel;
@property (nonatomic) NSString displayMessage;
- (id)displayLabel;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id)displayMessage;
- (id)glyphName;
- (BOOL)hasFocalPoint;
- (id)focalPoint;
- (id)initWithDomain:label:glyphName:hasFocalPoint:focalPoint:displayLabel:displayMessage:;
+ (BOOL)supportsSecureCoding;
@end
