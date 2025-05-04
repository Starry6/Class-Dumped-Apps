@interface AWEPOIEventInfoItem : MTLModel
@property (nonatomic) NSString event;
@property (nonatomic) NSArray androidOwner;
@property (nonatomic) NSArray iosOwner;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)androidOwner;
- (id)validateOwnersIsString:;
- (void)setAndroidOwner:;
- (id)iosOwner;
- (void)setIosOwner:;
- (void)setEvent:;
- (void).cxx_destruct;
- (BOOL)validate:;
- (id)event;
+ (id)JSONKeyPathsByPropertyKey;
@end
