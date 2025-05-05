@interface VKImageAnalysisInteractionResultInfo : NSObject
@property (nonatomic) NSString displayLabel;
@property (nonatomic) NSString displayMessage;
@property (nonatomic) NSString domain;
@property (nonatomic) NSString glyphName;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingRect;
- (id)displayLabel;
- (void).cxx_destruct;
- (id)domain;
- (id)displayMessage;
- (id)glyphName;
- (id)initWithDisplayLabel:displayMessage:glyphName:rect:;
- (id)normalizedBoundingRect;
@end
