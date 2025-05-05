@interface MSCMSSigningTimeAttribute : NSObject
@property (nonatomic) NSDate signingTime;
- (void).cxx_destruct;
- (id)signingTime;
- (id)initWithAttribute:error:;
- (id)encodeAttributeWithError:;
- (id)initWithSigningTime:;
@end
