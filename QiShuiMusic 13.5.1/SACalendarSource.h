@interface SACalendarSource : SASource
@property (nonatomic) BOOL strict;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)strict;
- (void)setStrict:;
+ (id)source;
+ (id)sourceWithDictionary:context:;
@end
