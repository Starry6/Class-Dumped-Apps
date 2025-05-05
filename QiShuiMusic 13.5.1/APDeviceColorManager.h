@interface APDeviceColorManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getColorLabel:biz:ext:error:;
- (void)updateColorLabel:label:;
- (id)init;
+ (id)sharedInstance;
@end
