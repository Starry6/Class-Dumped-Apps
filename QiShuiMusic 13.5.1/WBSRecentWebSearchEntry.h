@interface WBSRecentWebSearchEntry : NSObject
@property (nonatomic) NSString searchString;
@property (nonatomic) NSDate date;
- (id)init;
- (id)searchString;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)date;
- (void).cxx_destruct;
- (id)initWithSearchString:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithSearchString:date:;
@end
