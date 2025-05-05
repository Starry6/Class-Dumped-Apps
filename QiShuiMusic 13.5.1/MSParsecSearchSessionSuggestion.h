@interface MSParsecSearchSessionSuggestion : NSObject
@property (nonatomic) NSString category;
@property (nonatomic) q option;
@property (nonatomic) NSString resultID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)category;
- (id)feedbackResult;
- (long long)option;
- (id)resultID;
- (id)initWithIdentifier:category:option:;
- (id)_suggestionBundleID;
+ (id)suggestionWithIdentifier:category:option:;
@end
