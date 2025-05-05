@interface CLPropertyValue : NSObject
@property (nonatomic) @ value;
@property (nonatomic) BOOL dirty;
- (void)setDirty:;
- (void)dealloc;
- (BOOL)dirty;
- (id)value;
- (id)initWithValue:dirty:;
@end
