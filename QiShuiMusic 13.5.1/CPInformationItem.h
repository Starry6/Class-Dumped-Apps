@interface CPInformationItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString detail;
- (id)initWithCoder:;
- (id)detail;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithTitle:detail:;
+ (BOOL)supportsSecureCoding;
@end
