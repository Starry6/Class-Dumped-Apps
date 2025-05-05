@interface WBSTemplateIconMonogramGenerator : NSObject
+ (id)monogramStringForTitle:url:;
+ (id)monogramStringForURL:;
+ (id)monogramWithTitle:url:backgroundColor:;
+ (id)_monogramStringForPreparedTitle:url:;
+ (id)monogramWithTitle:url:monogramConfiguration:;
+ (id)monogramWithTitle:url:size:fontSize:fontWeight:baselineOffset:backgroundColor:cornerRadius:;
+ (id)monogramWithTitle:url:size:fontSize:fontWeight:baselineOffset:backgroundColor:foregroundColor:cornerRadius:;
@end
