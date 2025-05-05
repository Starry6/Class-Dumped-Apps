@interface EKCalendarChange : EKObjectChange
@property (nonatomic) BOOL titleChanged;
@property (nonatomic) BOOL colorChanged;
@property (nonatomic) BOOL orderChanged;
- (id)initWithChangeProperties:;
- (BOOL)titleChanged;
- (BOOL)colorChanged;
- (BOOL)orderChanged;
+ (int)entityType;
@end
