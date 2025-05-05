@interface YYTextBinding : NSObject
@property (nonatomic) BOOL deleteConfirm;
- (BOOL)deleteConfirm;
- (void)setDeleteConfirm:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
+ (id)bindingWithDeleteConfirm:;
@end
