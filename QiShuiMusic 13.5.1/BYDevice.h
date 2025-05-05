@interface BYDevice : NSObject
@property (nonatomic) q type;
@property (nonatomic) q size;
@property (nonatomic) NSString deviceClass;
@property (nonatomic) BOOL hasHomeButton;
@property (nonatomic) NSInteger mainScreenClass;
@property (nonatomic) NSString productType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentDevice;
- (id)deviceClass;
- (id)productType;
- (id)init;
- (long long)type;
- (BOOL)hasHomeButton;
- (void).cxx_destruct;
- (long long)size;
- (int)mainScreenClass;
+ (id)currentDevice;
@end
