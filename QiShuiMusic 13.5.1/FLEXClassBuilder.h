@interface FLEXClassBuilder : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) # workingClass;
@property (nonatomic) BOOL isRegistered;
- (id)init;
- (id)initWithClass:;
- (id)description;
- (id)addMethods:;
- (id)addProperties:;
- (id)addProtocols:;
- (id)addIvars:;
- (Class)registerClass;
- (BOOL)isRegistered;
- (Class)workingClass;
- (id)name;
- (void)setName:;
- (void).cxx_destruct;
+ (id)allocateClass:;
+ (id)allocateClass:superclass:;
+ (id)allocateClass:superclass:extraBytes:;
+ (id)allocateRootClass:;
+ (id)builderForClass:;
@end
