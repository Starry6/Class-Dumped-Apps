@interface WKFindResult : NSObject
@property (nonatomic) BOOL matchFound;
- (id)init;
- (id)copyWithZone:;
- (id)_initWithMatchFound:;
- (BOOL)matchFound;
@end
