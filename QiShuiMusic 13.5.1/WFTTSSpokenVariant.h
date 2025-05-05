@interface WFTTSSpokenVariant : NSObject
@property (nonatomic) NSString displayString;
@property (nonatomic) NSString spokenString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)displayString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)spokenString;
- (id)initWithDisplayString:spokenString:;
+ (id)parseAnnotationString:;
@end
