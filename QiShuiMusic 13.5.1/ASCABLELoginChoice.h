@interface ASCABLELoginChoice : NSObject
@property (nonatomic) NSURL qrCodeURL;
@property (nonatomic) Q loginChoiceKind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)loginChoiceKind;
- (id)qrCodeURL;
- (id)initWithQRCodeURL:;
+ (BOOL)supportsSecureCoding;
@end
