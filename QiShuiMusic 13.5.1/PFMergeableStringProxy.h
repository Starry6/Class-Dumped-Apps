@interface PFMergeableStringProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)appendString:;
- (void)setString:;
- (void)merge:;
- (void)insertString:atIndex:;
- (id)initWithContainer:key:mergeableString:;
- (id)computedValue;
- (void)removeSubrange:;
- (void)replaceSubrange:withString:;
+ (BOOL)supportsMergeableTransformable;
@end
