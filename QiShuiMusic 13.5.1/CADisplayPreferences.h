@interface CADisplayPreferences : NSObject
@property (nonatomic) BOOL matchContent;
@property (nonatomic) NSString preferredHdrMode;
@property (nonatomic) NSInteger _preferredHdrType;
- (id)init;
- (void)dealloc;
- (id)initWithPreferences:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)initWithMatchContent:preferredHdrType:;
- (BOOL)matchContent;
- (void)setMatchContent:;
- (id)preferredHdrMode;
- (int)_preferredHdrType;
- (void)setPreferredHdrMode:;
@end
