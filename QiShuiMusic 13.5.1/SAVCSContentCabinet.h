@interface SAVCSContentCabinet : SAUISnippet
@property (nonatomic) BOOL browseResults;
@property (nonatomic) NSNumber fullScreenEnabled;
@property (nonatomic) NSArray shelves;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)shelves;
- (void)setShelves:;
- (BOOL)browseResults;
- (void)setBrowseResults:;
- (id)fullScreenEnabled;
- (void)setFullScreenEnabled:;
+ (id)contentCabinet;
+ (id)contentCabinetWithDictionary:context:;
@end
