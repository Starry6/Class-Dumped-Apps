@interface CPTripPreviewTextConfiguration : NSObject
@property (nonatomic) NSString startButtonTitle;
@property (nonatomic) NSString additionalRoutesButtonTitle;
@property (nonatomic) NSString overviewButtonTitle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithStartButtonTitle:additionalRoutesButtonTitle:overviewButtonTitle:;
- (id)startButtonTitle;
- (id)additionalRoutesButtonTitle;
- (id)overviewButtonTitle;
+ (BOOL)supportsSecureCoding;
@end
