@interface SAUIUpdateViews : SABaseClientBoundCommand
@property (nonatomic) NSArray views;
- (id)views;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setViews:;
+ (id)updateViews;
+ (id)updateViewsWithDictionary:context:;
@end
