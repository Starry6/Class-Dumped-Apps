@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) SAUIColor color;
@property (nonatomic) SAIntentGroupDetailLabelTemplateComponent detailLabelComponent;
@property (nonatomic) BOOL interactive;
@property (nonatomic) SALocation location;
@property (nonatomic) NSString mapSize;
@property (nonatomic) <SAIntentGroupSetMapLocation> updateLocationCommand;
- (id)groupIdentifier;
- (void)setInteractive:;
- (void)setColor:;
- (id)location;
- (BOOL)interactive;
- (id)color;
- (id)mapSize;
- (id)encodedClassName;
- (void)setLocation:;
- (void)setMapSize:;
- (id)detailLabelComponent;
- (void)setDetailLabelComponent:;
- (id)updateLocationCommand;
- (void)setUpdateLocationCommand:;
+ (id)mapSnippetTemplate;
+ (id)mapSnippetTemplateWithDictionary:context:;
@end
