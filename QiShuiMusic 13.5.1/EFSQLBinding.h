@interface EFSQLBinding : NSObject
@property (nonatomic) EFSQLBinding ef_SQLBinding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindTo:withSQLIndex:;
- (id)ef_SQLBinding;
- (void)bindToStatement:usingIndex:;
- (void)bindToStatement:usingName:;
+ (id)bindingWithString:;
+ (id)bindingWithData:;
+ (id)bindingWithInt64:;
+ (id)bindingWithDouble:;
+ (id)nullBinding;
@end
