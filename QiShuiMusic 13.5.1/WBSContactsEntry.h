@interface WBSContactsEntry : NSObject
@property (nonatomic) CNContact contact;
- (id)fullName;
- (id)initWithContact:;
- (id)contact;
- (void).cxx_destruct;
- (id)valueForWBSProxyProperty:;
- (id)valueStringForWBSProperty:wbsComponent:atIndex:;
- (unsigned long long)_numberOfValuesForWBSProperty:;
- (unsigned long long)_numberOfValuesForWBSProperty:andContact:;
+ (BOOL)isWBSProxyProperty:;
+ (BOOL)_isContactsProperty:;
+ (BOOL)_isContactsLabel:;
+ (id)localizedWBSPropertyOrLabel:;
+ (id)_valueStringForWBSComponent:inInstantMessageAddress:;
+ (id)_valueStringForWBSComponent:inAddress:;
+ (BOOL)_isValueAStringForContactsProperty:;
+ (id)_valueStringForValue:wbsProperty:wbsComponent:atIndex:;
+ (id)_valueStringForValue:wbsProperty:wbsComponent:;
@end
