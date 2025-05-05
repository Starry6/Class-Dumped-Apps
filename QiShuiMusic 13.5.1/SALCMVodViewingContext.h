@interface SALCMVodViewingContext : SALCMViewingContext
@property (nonatomic) NSDate originalEventStartTime;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)originalEventStartTime;
- (void)setOriginalEventStartTime:;
+ (id)vodViewingContext;
+ (id)vodViewingContextWithDictionary:context:;
@end
