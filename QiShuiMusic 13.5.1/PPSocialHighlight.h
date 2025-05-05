@interface PPSocialHighlight : NSObject
@property (nonatomic) NSNumber score;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL resourceURL;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) NSArray attributionIdentifiers;
@property (nonatomic) NSDictionary supplementaryData;
- (id)resourceURL;
- (id)score;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timestamp;
- (id)description;
- (id)initWithIdentifier:resourceURL:timestamp:attributionIdentifiers:supplementaryData:score:;
- (id)initWithIdentifier:resourceURL:timestamp:attributionIdentifiers:supplementaryData:;
- (id)attributionIdentifiers;
- (id)supplementaryData;
+ (BOOL)supportsSecureCoding;
@end
