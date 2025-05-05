@interface GEOPOIEventPerformer : NSObject
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString iTunesIdentifier;
@property (nonatomic) NSURL iTunesURL;
- (void)setLocalizedName:;
- (id)localizedName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithPerformer:;
- (id)iTunesIdentifier;
- (void)setITunesIdentifier:;
- (id)iTunesURL;
- (void)setITunesURL:;
+ (BOOL)supportsSecureCoding;
+ (id)poiEventPerformersForPerformers:;
@end
