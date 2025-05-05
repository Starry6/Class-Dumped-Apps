@interface BSProtobufSchema : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)addRepeatingField:containsClass:;
- (void)addField:;
- (void)addRepeatingField:containsClass:forTag:;
- (void)addField:forTag:;
- (void)addField:allowedClasses:;
- (void)addRepeatingField:containsClasses:;
@end
