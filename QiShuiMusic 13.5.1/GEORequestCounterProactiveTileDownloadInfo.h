@interface GEORequestCounterProactiveTileDownloadInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSArray policies;
- (id)policies;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:policies:;
+ (BOOL)supportsSecureCoding;
@end
