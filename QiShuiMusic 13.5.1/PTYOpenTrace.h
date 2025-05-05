@interface PTYOpenTrace : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)reportTrace:filter:;
+ (BOOL)enabled;
+ (void)setup:;
@end
