@interface SAVCSContentShelf : SAAceView
@property (nonatomic) NSArray contentHead;
@property (nonatomic) NSArray fetchMoreResultsCommands;
@property (nonatomic) NSString title;
@property (nonatomic) NSURL url;
- (id)url;
- (id)groupIdentifier;
- (void)setTitle:;
- (void)setUrl:;
- (id)title;
- (id)encodedClassName;
- (id)contentHead;
- (void)setContentHead:;
- (id)fetchMoreResultsCommands;
- (void)setFetchMoreResultsCommands:;
+ (id)contentShelf;
+ (id)contentShelfWithDictionary:context:;
@end
