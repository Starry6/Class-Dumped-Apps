@interface WKFocusedElementInfo : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString value;
@property (nonatomic) NSString placeholder;
@property (nonatomic) NSString label;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) NSObject<NSSecureCoding> userObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)placeholder;
- (id)userObject;
- (id)label;
- (BOOL)isUserInitiated;
- (long long)type;
- (void).cxx_destruct;
- (id)value;
- (id).cxx_construct;
- (id)initWithFocusedElementInformation:isUserInitiated:userObject:;
@end
